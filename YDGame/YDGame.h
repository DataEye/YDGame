//
//  YDGame.h
//  YDGame
//
//  Created by xqwang on 2017/6/5.
//  Copyright © 2017年 xqwang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YDUserAccount.h"
#import "YDGameHeader.h"

@interface YDGame : NSObject

/**
 * SDK的初始化接口
 * @param payAppId 应用的支付AppID
 * @param openKey 应用在优点后台申请AppID时生成的developId，用于SDK内部加密数据
 * @param trackingAppId 应用的广告效果追踪appId
 * @param channelId 应用将要推广的渠道Id
 *
 **/
+(void)initWithAppId:(NSString*)payAppId openKey:(NSString*)openKey trackingAppId:(NSString*)trackingAppId channelId:(NSString*)channelId;

/**
 * SDK的回调事件设置接口
 * @param delegate 回调事件的观察者，建议使用全局变量作为参数
 *
 **/
+(void)setDelegate:(id<YDGameDelegate>)delegate;


/***************************************************************以下为付费功能接口***************************************************************/

/**
 * 设置应用的跳转URL，用于支付完成后从支付App跳回应用
 * @param scheme 应用对应的Url
 *
 **/
+(void)setAppScheme:(NSString*)scheme;

/**
 * 不定金额的支付接口
 * @param orderId 订单ID，请开发者确保该ID的惟一性，用于与优点核对数据
 * @param orderName 订单名称
 * @param userId 当前支付玩家的账号ID
 * @param producNo 支付的商品在优点后台对应的ID，请确保传入值的正确性
 * @param amount 本次支付的总金额，单位为分
 * @param param 支付成功后，优点后台透传给应用服务器的参数
 **/
+(void)pay:(NSString*)orderId orderName:(NSString*)orderName userId:(NSString*)userId
 productNo:(NSString*)productNo amount:(NSUInteger)amount param:(NSString*)param;

/**
 * 定额的支付接口
 * @param orderId 订单ID，请开发者确保该ID的惟一性，用于与优点核对数据
 * @param orderName 订单名称
 * @param userId 当前支付玩家的账号ID
 * @param producNo 支付的商品在优点后台对应的ID，请确保传入值的正确性
 * @param param 支付成功后，优点后台透传给应用服务器的参数
 **/
+(void)pay:(NSString*)orderId orderName:(NSString*)orderName userId:(NSString*)userId
 productNo:(NSString*)productNo param:(NSString*)param;



/***************************************************************以下为登陆功能接口***************************************************************/

+(void)setWindowType:(WindowType)type;

+(void)autoRatate:(BOOL)enable;

+(void)showWindow;

//接口用于将优点的账户体系与接入商自己的账号体系关联起来，将优点账户ID与用户账户ID关联到一起
+(void)bindGameUserId:(NSString*)userId;

+(void)logout;

+(YDUserAccount*)currentAccount;



/***************************************************************以下为广告效果追踪功能接口************************************************************/

/**
 * @brief 获取设备ID
 **/
+(NSString*)getUID;

/**
 @brief 广告效果追踪设置有效的效果点
 @param pointId 广告效果点
 @param propDictionary 触发时希望传入的属性字典
 **/
+(void)setEffectPoint:(NSString*)pointId propDictionary:(NSDictionary*)dictionary;

@end

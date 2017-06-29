//
//  YDGameHeader.h
//  YDGame
//
//  Created by xqwang on 2017/6/5.
//  Copyright © 2017年 xqwang. All rights reserved.
//

#ifndef YDGameHeader_h
#define YDGameHeader_h

#define YDGameToastShowCompleteNotification   @"YDGame_Toast_Show_Complete"

@class YDUserAccount;

typedef NS_ENUM(NSInteger, WindowType)
{
    Dialog = 0,
    Activity
};

typedef NS_ENUM(NSUInteger, YDToolStatus)
{
    YD_FAIL = 0,
    YD_SUCCESS,
    YD_CANCEL,
    YD_UNKNOW,
};

@protocol YDGameDelegate <NSObject>

@optional
-(void)accountLogin:(YDUserAccount*)model;
-(void)accountRegist:(YDUserAccount*)model;
-(void)toolResult:(YDToolStatus)result data:(id)data;

@end

#endif /* YDGameHeader_h */

//
//  YDUserAccount.h
//  YDGame
//
//  Created by xqwang on 2017/6/6.
//  Copyright © 2017年 xqwang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface YDUserAccount : NSObject

//账号ID，账号惟一标识
@property(nonatomic, assign)long long accountId;
//用户名
@property(nonatomic, copy)NSString* accountName;
//用户绑定手机号
@property(nonatomic, copy)NSString* phoneNumber;

@end

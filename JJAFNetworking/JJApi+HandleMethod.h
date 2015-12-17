//
//  JJApi+HandleMethod.h
//  JJAFNetworking_Demo
//
//  Created by Jay on 15/12/17.
//  Copyright © 2015年 JJ. All rights reserved.
//

#import "JJApi.h"

@interface JJApi (HandleMethod)

#pragma mark - Inherit

/** 将要发起请求 */
- (void)willstart;

/** 已经发起请求 */
- (void)didstart;

/** 将要开始处理数据(成功) */
- (void)willHandleSuccess;

/** 结束处理数据(成功) */
- (void)didHandleSuccess;

/** 将要开始处理数据(失败) */
- (void)willHandleFailure;

/** 结束处理数据(失败) */
- (void)didHandleFailure;

/** 将要取消 */
- (void)willCancel;

/** 已经取消 */
- (void)didCancel;

@end

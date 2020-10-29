//
//  IRLaunchManage.h
//  IRiskSDK
//
//  Created by owen on 2020/8/12.
//  Copyright © 2020 owen. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "IRILaunchRouterName.h"
NS_ASSUME_NONNULL_BEGIN

@interface IRLaunchManage : NSObject
+(IRLaunchManage *)shared;
+ (void)setLogEnable:(BOOL)enable;
- (void)launchPageWithRouterName:(NSString *)routName;
- (void)launchPageWithRouterName:(NSString *)routName entnames:(NSArray *)entnames;
- (void)launchPageWithRouterName:(NSString *)routName param:(NSDictionary *)param;
@end

NS_ASSUME_NONNULL_END

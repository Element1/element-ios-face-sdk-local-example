//
//  UIViewController+Element.h
//  facedemo
//
//  Created by Laurent Grandhomme on 11/19/18.
//  Copyright © 2018 Element. All rights reserved.
//

#import <UIKit/UIKit.h>
#if !(TARGET_IPHONE_SIMULATOR)
#import <ElementSDK/ElementSDK.h>
#endif

NS_ASSUME_NONNULL_BEGIN

@interface UIViewController (Element)

#if !(TARGET_IPHONE_SIMULATOR)
+ (ELTAccount *)createAccountWithFirstName:(NSString *)fn lastName:(NSString *)ln;

- (void)pushFaceUserInitViewControllerForAccount:(ELTAccount *)account;

- (void)pushUserAuthenticationViewControllerForAccount:(ELTAccount *)account;
#endif

@end

NS_ASSUME_NONNULL_END

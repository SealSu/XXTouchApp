//
//  XXNavigationViewController.h
//  XXTouchApp
//
//  Created by Zheng on 8/29/16.
//  Copyright © 2016 Zheng. All rights reserved.
//

#import <UIKit/UIKit.h>

static NSString * const kXXRootNavigationControllerStoryboardID = @"kXXRootNavigationControllerStoryboardID";

@interface XXNavigationViewController : UINavigationController
- (void)handleShortCut:(NSString *)type;
- (void)handleItemTransfer:(NSURL *)url;

- (void)transitionToScanViewController;
@end

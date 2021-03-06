//
//  BaseViewController.h
//  ThatSo
//
//  Created by John A Seubert on 12/11/14.
//  Copyright (c) 2014 John Seubert. All rights reserved.
//

#import <iAd/iAd.h>

@interface BaseViewController : UIViewController <UIAlertViewDelegate, ADBannerViewDelegate>
{
    NSDateFormatter *_dateFormatter;
    BOOL canShowBanner;
}

- (void) dismissAlert;
- (void) showAlertWithTitle: (NSString *)title andSummary:(NSString *)summary;
- (void) showLoadingAlert;
- (void) showLoadingAlertWithText: (NSString *)title;

- (void) showActivityIndicator;
- (void) hideActivityIndicator;

- (CGFloat) bannerHeight;

@property (nonatomic, strong) UIAlertView *alertView;
@property (strong, nonatomic) UIActivityIndicatorView *activityIndicator;

@end
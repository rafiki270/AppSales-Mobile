//
//  PadRootViewController.h
//  AppSalesMobile
//
//  Created by Ole Zorn on 05.04.10.
//  Copyright 2010 omz:software. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DashboardView, ReviewsPane;

@interface PadRootViewController : UIViewController <UIActionSheetDelegate> {

	UIToolbar *toolbar;
	UILabel *statusLabel;
	UIActivityIndicatorView *activityIndicator;
	UIPopoverController *settingsPopover;
	UIPopoverController *importExportPopover;
	UIActionSheet *graphTypeSheet;
	UIBarButtonItem *filterItem;
	UIActionSheet *filterSheet;
	
	DashboardView *dailyDashboardView;
	DashboardView *weeklyDashboardView;
	ReviewsPane *reviewsPane;
}

@property (nonatomic, retain) UIToolbar *toolbar;
@property (nonatomic, retain) UILabel *statusLabel;
@property (nonatomic, retain) UIActivityIndicatorView *activityIndicator;
@property (nonatomic, retain) UIPopoverController *settingsPopover;
@property (nonatomic, retain) UIPopoverController *importExportPopover;
@property (nonatomic, retain) UIActionSheet *graphTypeSheet;
@property (nonatomic, retain) UIBarButtonItem *filterItem;
@property (nonatomic, retain) UIActionSheet *filterSheet;
@property (nonatomic, retain) DashboardView *dailyDashboardView;
@property (nonatomic, retain) DashboardView *weeklyDashboardView;
@property (nonatomic, retain) ReviewsPane *reviewsPane;

@end
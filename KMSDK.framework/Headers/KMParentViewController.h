//
//  TKParentViewController.h
//  TrekkerLive
//
//  Created by Max Campolo on 1/13/15.
//  Copyright (c) 2015 Kiswe Mobile. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Event;
@class WidgetContainerViewController;
@class KMMediaViewController;

@interface KMParentViewController : UIViewController

// Properties
@property (nonatomic, strong, null_unspecified) Event *event;
@property (nonatomic, strong, nonnull) NSString *eventID;
@property (nonatomic, weak, null_unspecified) IBOutlet UIView *mediaContainerView;
@property (nonatomic, strong, nonnull) KMMediaViewController *mediaPlayerController;
@property (nonatomic, strong, nullable) WidgetContainerViewController *widgetContainerController;
@property (nonatomic, strong, null_unspecified) NSLayoutConstraint *bottomConstraint;
@property (nonatomic, strong, null_unspecified) NSLayoutConstraint *mediaContainerHeightConstraint;

@property (nonatomic, strong, nullable) NSString *username;

-(void)reloadEvent:(NSString * _Nonnull)eventId;

@end

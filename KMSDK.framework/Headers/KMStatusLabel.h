//
//  KMStatusLabel.h
//  TrekkerLive
//
//  Created by Max Campolo on 5/29/15.
//  Copyright (c) 2015 Kiswe Mobile. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface KMStatusLabel : UILabel

@property (nonatomic, assign) UIColor *bgColor;
@property (nonatomic, assign) bool roundedCorners;
@property (nonatomic, assign) float textSize;

+ (void)showWithMessage:(NSString*)message;
+ (void)showWithMessage:(NSString *)message inView:(UIView*)view;
+ (KMStatusLabel*)sharedView;
+ (void)dismiss;

@end

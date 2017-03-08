//
//  TKOverlayWidget.h
//  TrekkerLive
//
//  Created by Max Campolo on 3/13/15.
//  Copyright (c) 2015 Kiswe Mobile. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class Event;

@interface TKOverlayWidget : NSObject

// Properties
@property (nonatomic, strong, nullable) NSString *widgetURL;
@property (nonatomic, strong, nullable) NSString *widgetId;
@property (nonatomic, strong, nullable) NSString *widgetTitle;
@property (nonatomic, strong, nullable) NSArray *showOnStreams;
@property (nonatomic, strong, nullable) NSDictionary *addons;
@property (nonatomic, strong, nullable) NSArray *receivedMethods;
@property (nonatomic, strong, nullable) NSArray *sendHandlers;
@property CGRect widgetFrame;

// Instance method - setup
- (nonnull instancetype)initWithWidgetDictionary:(nonnull NSDictionary*)dict;

+ (nonnull NSArray<TKOverlayWidget*>*)widgetsInEvent:(nonnull Event*)event;

@end

//
//  TLAPIClient.h
//  TrekkerLive
//
//  Created by Max Campolo on 11/4/14.
//  Copyright (c) 2014 Kiswe Mobile. All rights reserved.
//

#import <Foundation/Foundation.h>

@class Event;

@interface KMAPIClient : NSObject

// Singleton instance
+ (nonnull KMAPIClient *) sharedClient;

@property (nonatomic, nullable, readonly) NSString* token;

#pragma mark - Events

// KMSDK: Needed for getting event details
- (void)fetchEventWithId:(nonnull NSString*)eventId
               onSuccess:(void (^ _Nonnull)(Event * _Nonnull))success
               onFailure:(void (^ _Nonnull)(void))failure;

#pragma mark - Helper Methods

- (void)setToken:(NSString * _Nonnull)token;

@end

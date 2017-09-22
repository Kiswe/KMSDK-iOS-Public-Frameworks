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

@property (nonatomic, nullable) NSString* token;
@property (nonatomic, nonnull) NSString* apiUrlString;
@property (nonatomic, nonnull) NSString* msgHostString;

#pragma mark - Events

// KMSDK: Needed for getting event details
- (void)fetchEventWithId:(nonnull NSString*)eventId
               onSuccess:(void (^ _Nonnull)(__unsafe_unretained Event* _Nonnull))success
               onFailure:(void (^ _Nonnull)(void))failure;

- (void)checkFailoverWithId:(nonnull NSString*)eventId dataServer:(NSString* _Nonnull)dataServer
                  onSuccess:(void (^ _Nonnull)(NSString* _Nonnull))success
                  onFailure:(void (^ _Nonnull)(void))failure;

@end

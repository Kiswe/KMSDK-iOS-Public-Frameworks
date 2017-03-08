//
//  NascarCarView.h
//  TrekkerLive
//
//  Created by cb on 11/24/15.
//  Copyright © 2015 Kiswe Mobile. All rights reserved.
//

#import <UIKit/UIKit.h>

@class KMPlayerView;

@interface NascarCarView : UIView

@property (assign) BOOL updateNascarTrack;
@property (nonatomic, assign) unsigned int nascarTrackMode;
@property (nonatomic, assign) KMPlayerView *mPlayerView;

- (void) loadNascarData;
- (void) updateCars:(unsigned char) numsets forBuf:(unsigned char*)buf andIdx:(int)idx;

@end

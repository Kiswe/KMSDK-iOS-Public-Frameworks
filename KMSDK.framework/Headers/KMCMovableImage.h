//
//  KMCMovableImage.h
//  kmc
//
//  Created by tj on 12/26/13.
//  Copyright (c) 2013 Kiswe. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface KMCMovableImage : UIImageView
@property BOOL frameUpdate;
@property unsigned int object_id;
@property float naturalX, naturalY;
- (float)distanceFrom:(CGPoint)point;
@end

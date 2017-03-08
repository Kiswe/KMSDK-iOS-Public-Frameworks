//
//  RectView.h
//  Trekker
//
//  Created by InfAspire on 24/6/2014.
//  Copyright (c) 2014 Kiswe. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RectView : UIView
@property BOOL frameUpdate;
@property unsigned int object_id;
@property float naturalX, naturalY, naturalW, naturalH;
@property BOOL highlighted;
@property BOOL hideBorder;

- (float)distanceFrom:(CGPoint)point;
- (BOOL)isPointInside:(CGPoint)point;

@end

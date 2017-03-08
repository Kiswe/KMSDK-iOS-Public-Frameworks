//
//  CircleView.h
//  Trekker
//
//  Created by InfAspire on 24/6/2014.
//  Copyright (c) 2014 Kiswe. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CircleView : UIView
@property BOOL frameUpdate;
@property unsigned int object_id;
@property float naturalX, naturalY, naturalW, naturalH;
@property BOOL highlighted;

- (float)distanceFrom:(CGPoint)point;

@end

@interface UIColor (PaintCodeAdditions)

- (UIColor*)blendedColorWithFraction: (CGFloat)fraction ofColor: (UIColor*)color;

@end
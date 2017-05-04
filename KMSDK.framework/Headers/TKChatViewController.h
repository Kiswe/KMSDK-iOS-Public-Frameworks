//
//  TKChatViewController.h
//  TrekkerLive
//
//  Created by cb on 8/12/15.
//  Copyright (c) 2015 Kiswe Mobile. All rights reserved.
//

#import <SlackTextViewController/SLKTextViewController.h>

@interface TKChatViewController : SLKTextViewController

@property (nonatomic, strong, nullable) NSString *initialText;
@property (nonatomic, strong) void (^ _Null_unspecified sendMessageClosure)(NSString* _Nonnull);

@end

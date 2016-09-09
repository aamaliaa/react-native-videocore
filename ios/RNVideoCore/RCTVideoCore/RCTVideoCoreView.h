//
//  RCTVideoCoreView.h
//  RNVideoCore
//
//  Created by Guilherme Medeiros on 17/12/15.
//  Copyright © 2015 Facebook. All rights reserved.
//

#import "VCSimpleSession.h"
#import "RCTEventDispatcher.h"

@class RCTVideoCoreViewManager;

@interface RCTVideoCoreView : UIView <VCSessionDelegate>

@property (nonatomic) RCTEventDispatcher *eventDispatcher;

+ (void) startStream:(NSString *)streamUrl andStreamKey:(NSString *)streamKey;
+ (void) stopStream;
+ (void) flipCamera;

- (instancetype) initWithEventDispatcher:(RCTEventDispatcher *)eventDispatcher NS_DESIGNATED_INITIALIZER;

@end

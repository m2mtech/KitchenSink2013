//
//  CMMotionManager+Shared.m
//  KitchenSink
//
//  Created by Martin Mandl on 21.07.13.
//  Copyright (c) 2013 m2m server software gmbh. All rights reserved.
//

#import "CMMotionManager+Shared.h"

@implementation CMMotionManager (Shared)

+ (CMMotionManager *)sharedMotionManager
{
    static CMMotionManager *shared = nil;
    if (!shared) {
        static dispatch_once_t onceToken;
        dispatch_once(&onceToken, ^{
            shared = [[CMMotionManager alloc] init];
        });        
    }
    return shared;
}

@end

//
//  CMMotionManager+Shared.h
//  KitchenSink
//
//  Created by Martin Mandl on 21.07.13.
//  Copyright (c) 2013 m2m server software gmbh. All rights reserved.
//

#import <CoreMotion/CoreMotion.h>

@interface CMMotionManager (Shared)

+ (CMMotionManager *)sharedMotionManager;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSOperationQueue;

@interface SCRoute : NSObject
{
    id _availableRouteActions;
    NSOperationQueue *_routingQueue;
    NSMutableArray *_routeActions;
}

- (void).cxx_destruct;
- (void)run;
- (void)addAction:(CDUnknownBlockType)arg1;
- (id)initWithRouteActions:(id)arg1 routingQueue:(id)arg2;

@end


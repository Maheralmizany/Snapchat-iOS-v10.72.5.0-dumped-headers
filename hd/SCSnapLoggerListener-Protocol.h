//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCADirectSnapSend, SCAGeofilterDirectSnapSend, SCSnapLogger;

@protocol SCSnapLoggerListener <NSObject>
- (void)snapLogger:(SCSnapLogger *)arg1 didLogGeofilterDirectSnapSendEvent:(SCAGeofilterDirectSnapSend *)arg2;
- (void)snapLogger:(SCSnapLogger *)arg1 didLogDirectSnapEvent:(SCADirectSnapSend *)arg2;
@end


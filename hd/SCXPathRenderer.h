//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCXRenderer.h"

@class NSString, SCXDashedPathRenderer, SCXFlightPathRenderer;

@interface SCXPathRenderer : NSObject <SCXRenderer>
{
    SCXDashedPathRenderer *_dashedPathRenderer;
    SCXFlightPathRenderer *_flightPathRenderer;
}

- (void).cxx_destruct;
- (void)complete;
- (void)render:(id)arg1;
- (void)prepare;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


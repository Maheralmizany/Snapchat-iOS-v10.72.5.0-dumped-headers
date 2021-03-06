//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCLensCarouselActivationEvent.h"

@class NSString;

@interface SCLensInitEvent : NSObject <SCLensCarouselActivationEvent>
{
    unsigned long long _managedLensesProcessorCoreState;
    long long _activationFlow;
    double _startTime;
    double _stopTime;
}

+ (id)eventWithActivationFlow:(long long)arg1 lensProcessorCoreState:(unsigned long long)arg2;
@property(readonly, nonatomic) unsigned long long managedLensesProcessorCoreState; // @synthesize managedLensesProcessorCoreState=_managedLensesProcessorCoreState;
- (double)activationDelay;
- (long long)activationFlow;
- (void)stop:(double)arg1;
- (void)start:(double)arg1;
- (id)initWithActivationFlow:(long long)arg1 lensProcessorCoreState:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCFeatureLensSideButtonUpdateProviderImplementation.h"

@class NSString, SCLens;

@interface SCFeatureLensSideButtonUpdateProvider : NSObject <SCFeatureLensSideButtonUpdateProviderImplementation>
{
    id <SCFeatureLensSideButtonUpdateProviderImplementation> _implementation;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SCLens *firstApplicableLens;
@property(readonly, nonatomic) _Bool newLensesAvailable;
- (void)removeListener:(id)arg1;
- (_Bool)addListener:(id)arg1;
- (void)lensesTurnedOff;
- (void)lensesTurnedOn;
- (id)initWithRegistry:(id)arg1 lensSideButtonDelegate:(id)arg2 userSession:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

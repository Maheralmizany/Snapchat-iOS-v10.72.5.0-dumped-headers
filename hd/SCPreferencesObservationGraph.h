//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface SCPreferencesObservationGraph : NSObject
{
    NSMutableDictionary *_observationGraph;
}

- (void).cxx_destruct;
- (void)notifyObserversForChangedObjects:(id)arg1;
- (void)unobserveWithKeys:(id)arg1 observationToken:(id)arg2;
- (void)addObservedKeys:(id)arg1 observationToken:(id)arg2 callbackQueue:(id)arg3 changeHandler:(CDUnknownBlockType)arg4;
- (id)init;

@end


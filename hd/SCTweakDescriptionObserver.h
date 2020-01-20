//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBTweakObserver.h"

@class NSMapTable, NSString;

@interface SCTweakDescriptionObserver : NSObject <FBTweakObserver>
{
    NSMapTable *_tweakDescriptions;
}

+ (id)sharedObserver;
- (void).cxx_destruct;
- (void)tweakDidChange:(id)arg1;
- (id)_descriptionForTweak:(id)arg1;
- (void)setDescriptions:(id)arg1 forTweak:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

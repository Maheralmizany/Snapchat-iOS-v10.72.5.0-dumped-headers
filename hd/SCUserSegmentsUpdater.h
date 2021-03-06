//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCBehaviorSubject, SCLazy, SCObservable;

@interface SCUserSegmentsUpdater : NSObject
{
    SCLazy *_preferences;
    SCLazy *_allUpdates;
    SCBehaviorSubject *_userSegmentsObservable;
}

- (void).cxx_destruct;
- (void)_userSegmentsDidChange:(id)arg1;
- (id)_userSegmentsFromStringSet:(id)arg1;
- (void)_checkAllUpdatesForUserSegments:(id)arg1;
- (void)_subscribeAllUpdates;
@property(readonly, nonatomic) SCObservable *userSegmentsObservable; // @synthesize userSegmentsObservable=_userSegmentsObservable;
- (id)initWithPreferences:(id)arg1 allUpdates:(id)arg2;

@end


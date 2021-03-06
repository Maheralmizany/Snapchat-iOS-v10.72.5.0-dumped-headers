//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSOrderedSet, SCBehaviorSubject, SCDisposableObserverLifecycle, SIGIndexView;

@interface SIGIndexViewProvider : NSObject
{
    NSOrderedSet *_alphabeticalIndexes;
    NSOrderedSet *_predefinedIndexes;
    NSMutableDictionary *_predefinedKeyToCountMapping;
    SCBehaviorSubject *_titlesSubject;
    SIGIndexView *_indexView;
    NSOrderedSet *_titles;
    SCDisposableObserverLifecycle *_subscription;
    NSObject<OS_dispatch_queue> *_lock;
}

- (void).cxx_destruct;
- (void)_onNextTitles:(id)arg1;
- (void)_onNextPredefinedKey:(id)arg1 entityCount:(id)arg2;
@property(readonly, nonatomic) NSOrderedSet *titles;
@property(readonly, nonatomic) SIGIndexView *indexView;
- (id)initWithIndexEntityObservableRepository:(id)arg1 alphabeticalIndexes:(id)arg2 predefinedIndexes:(id)arg3;

@end


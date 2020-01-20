//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSOperationQueue, SCDisposableObserverLifecycle, SCSelectionTracker, SIGSelectBar;

@interface SIGSelectBarProvider : NSObject
{
    SCSelectionTracker *_selectionTracker;
    SCDisposableObserverLifecycle *_subscription;
    NSOperationQueue *_observationQueue;
    SIGSelectBar *_selectBar;
}

@property(readonly, nonatomic) SIGSelectBar *selectBar; // @synthesize selectBar=_selectBar;
- (void).cxx_destruct;
- (void)_updateWithItemToSelectionStateMap:(struct NSDictionary *)arg1;
- (id)initWithSelectionTracker:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCChatMessageMerger : NSObject
{
}

+ (id)mergeLocalNumericState:(id)arg1 withServerNumericState:(id)arg2;
+ (id)mergeLocalViewedTimestamp:(id)arg1 withServerViewedTimestamp:(id)arg2;
+ (id)mergeLocalSnap:(id)arg1 withServerSnap:(id)arg2;
+ (id)mergePreserveState:(id)arg1 withOtherPreserveState:(id)arg2;
+ (id)mergeReleaseState:(id)arg1 withOtherReleaseState:(id)arg2;
+ (id)mergeSavedState:(id)arg1 withOtherSavedState:(id)arg2;
+ (id)mergeLocalMessage:(id)arg1 withServerMessage:(id)arg2;

@end


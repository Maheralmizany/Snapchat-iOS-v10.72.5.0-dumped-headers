//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCCancelable.h"
#import "SCCanceling.h"

@class NSSet, NSString;

@protocol SCSIBackendRequest <SCCanceling, SCCancelable>
@property(readonly, nonatomic) NSSet *requestContexts;
@property(readonly, nonatomic) NSString *requestKey;
@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol SCDiscoverFeedSectionCollapseCoordinating <NSObject>
@property(retain, nonatomic) id <SCPerforming> performer;
@property(readonly, nonatomic) NSString *sectionType;
@property(nonatomic) long long collapseState;
@property(nonatomic) __weak id <SCDiscoverFeedSectionCollapseCoordinatingDelegate> delegate;

@optional
- (void)collapseProcessWithCompletionBlock:(void (^)(_Bool))arg1;
@end


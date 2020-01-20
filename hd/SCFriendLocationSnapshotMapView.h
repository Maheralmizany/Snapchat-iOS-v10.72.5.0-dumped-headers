//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SCFriendLocationSnapshotMapViewModel, SCLRUCache, SCMapSnapshotView, SCUserSession, UIImageView, UILabel;

@interface SCFriendLocationSnapshotMapView : UIView
{
    SCUserSession *_userSession;
    SCLRUCache *_snapshotCache;
    long long _source;
    UIImageView *_placeholderBackground;
    SCMapSnapshotView *_mapSnapshotView;
    UILabel *_centeredLabel;
    UILabel *_bottomLabel;
    UIView *_bottomLabelContainer;
    UIImageView *_standingPersonImageView;
    UIImageView *_calloutView;
    UIImageView *_standingPersonShadow;
    SCFriendLocationSnapshotMapViewModel *_viewModel;
}

@property(retain, nonatomic) SCFriendLocationSnapshotMapViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)standingPersonShadow;
- (id)standingPersonImageView;
- (id)bottomLabelContainer;
- (id)bottomLabel;
- (id)centeredLabel;
- (id)mapSnapshotView;
- (id)calloutView;
- (void)prepareForReuse;
- (id)initWithUserSession:(id)arg1 source:(long long)arg2;
- (id)initWithUserSession:(id)arg1 snapshotCache:(id)arg2 source:(long long)arg3;

@end


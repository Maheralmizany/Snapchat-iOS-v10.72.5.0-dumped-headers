//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSString, SCChatSharedLocationViewModel, SCFriendLocationSnapshotMapView, UILabel;

@interface SCChatSharedLocationView : UIView
{
    NSArray *_buttons;
    NSString *_instanceIdentifier;
    UILabel *_statusLabel;
    SCFriendLocationSnapshotMapView *_mapView;
    SCChatSharedLocationViewModel *_viewModel;
    id <SCChatSharedLocationViewDelegate> _delegate;
}

+ (struct CGSize)sizeForViewModel:(id)arg1 constrainedToSize:(struct CGSize)arg2;
@property(nonatomic) __weak id <SCChatSharedLocationViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SCChatSharedLocationViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)_tappedButton:(id)arg1;
- (void)_tappedMap:(id)arg1;
@property(readonly, nonatomic) SCFriendLocationSnapshotMapView *mapView; // @synthesize mapView=_mapView;
@property(readonly, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
- (void)prepareForReuseIfInstanceIdentifierChanged:(id)arg1;
- (void)layoutSubviews;

@end


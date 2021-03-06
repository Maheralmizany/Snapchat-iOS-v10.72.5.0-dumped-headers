//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCTAvatarFetchListener.h"

@class NSString, SCTPresenceDraggingContext, UILongPressGestureRecognizer, UIPanGestureRecognizer, UIScrollView, UIView;

@interface SCTPresenceController : NSObject <SCTAvatarFetchListener>
{
    id <SCTAvatarServices> _avatarServices;
    UIScrollView *_scrollView;
    UIView *_contentView;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UILongPressGestureRecognizer *_pillPressRecognizer;
    SCTPresenceDraggingContext *_draggingContext;
}

@property(retain, nonatomic) SCTPresenceDraggingContext *draggingContext; // @synthesize draggingContext=_draggingContext;
@property(retain, nonatomic) UILongPressGestureRecognizer *pillPressRecognizer; // @synthesize pillPressRecognizer=_pillPressRecognizer;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (void)_scheduleUIUpdate;
- (id)_participantForUsername:(id)arg1;
- (void)onError:(id)arg1;
- (void)onFetched:(id)arg1;
- (void)_fetchBitmojiForParticipantIfNeeded:(id)arg1;
- (void)_fetchBitmojiForParticipant:(id)arg1;
- (void)_initView;
- (id)initWithAvatarServices:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


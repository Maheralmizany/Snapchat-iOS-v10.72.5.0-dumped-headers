//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"

@class NSArray, NSDictionary, NSString, SCGCDBlockTimer, UIColor, UILongPressGestureRecognizer;

@interface SCSendToScrollView : UIView <UIGestureRecognizerDelegate>
{
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    UIColor *_colorForIcons;
    NSDictionary *_textStyleAttributes;
    NSArray *_scrollKeys;
    NSArray *_sectionIdentifiers;
    id <SCSendToScrollViewDelegate> _delegate;
    id <SCSendToIdentifierMapping> _identifierMapper;
    SCGCDBlockTimer *_timer;
    _Bool _shouldUpdate;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_highlightBackgroundWithGestureState:(long long)arg1;
- (void)longPress:(id)arg1;
- (id)_keyForIndex:(int)arg1;
- (void)_setupGestureRecognizers;
- (void)_updateSections;
- (void)_updateIndexWithSections:(id)arg1;
- (id)_iconWith:(id)arg1;
- (id)_iconWithText:(id)arg1;
- (id)_iconWithImage:(id)arg1;
- (void)setSections:(id)arg1;
- (id)initWithColor:(id)arg1 delegate:(id)arg2 identifierMapper:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


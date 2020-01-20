//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCTextMediaCardView.h"

@class NSURL, UILabel, UILongPressGestureRecognizer, UITapGestureRecognizer;

@interface SCUpdateAppMediaCardView : SCTextMediaCardView
{
    UITapGestureRecognizer *_tapGestureRecognizer;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    NSURL *_url;
    UILabel *_subtitleLabel;
}

- (void).cxx_destruct;
- (id)_openActionForUrl:(id)arg1;
- (id)_copyActionForUrl:(id)arg1;
- (void)_open:(id)arg1;
- (void)onLongPress:(id)arg1;
- (void)onTap:(id)arg1;
- (void)dealloc;
- (id)initWithViewModel:(id)arg1 userSession:(id)arg2;

@end


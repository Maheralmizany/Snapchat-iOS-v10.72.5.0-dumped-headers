//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

#import "SCGalleryPasscodeKeyView.h"

@class NSString, UIImageView, UILabel;

@interface SCGalleryPasscodeNumericKeyView : UIControl <SCGalleryPasscodeKeyView>
{
    UIImageView *_backgroundView;
    UIImageView *_highlightedView;
    UILabel *_label;
    UILabel *_highlightedLabel;
    _Bool _keyHighlighted;
    NSString *_keyValue;
}

@property(readonly, copy, nonatomic) NSString *keyValue; // @synthesize keyValue=_keyValue;
@property(nonatomic) _Bool keyHighlighted; // @synthesize keyHighlighted=_keyHighlighted;
- (void).cxx_destruct;
- (id)initWithKeySize:(double)arg1 keyValue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCMessageChatViewModel.h"

#import "SCUnknownChatCellViewConfig.h"

@class NSString, SCUpdateAppMediaCardViewModel;

@interface SCUnknownChatViewModel : SCMessageChatViewModel <SCUnknownChatCellViewConfig>
{
    NSString *_unknownString;
    SCUpdateAppMediaCardViewModel *_mediaCardViewModel;
}

+ (id)unknownMessageBackgroundColor;
+ (id)unknownMessageColor;
+ (id)unknownMessageHeaderColor;
- (void).cxx_destruct;
- (id)sectionColor;
- (id)attributedText;
- (id)rawText;
- (double)bodyContentWidth;
- (double)payloadVerticalMargin;
- (double)payloadHeight;
- (id)initWithMessage:(id)arg1 messageMetadata:(id)arg2 props:(id)arg3;
- (id)createChatCellWithParentVC:(id)arg1 delegate:(id)arg2;
- (id)reusableCellIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


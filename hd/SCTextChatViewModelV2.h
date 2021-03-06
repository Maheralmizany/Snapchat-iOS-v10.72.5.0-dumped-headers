//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCSavableItemChatViewModel.h"

#import "SCSavableTextChatCellViewConfig.h"

@class NSArray, NSAttributedString, NSMutableDictionary, NSString, SCSummaries, SCUserSession;

@interface SCTextChatViewModelV2 : SCSavableItemChatViewModel <SCSavableTextChatCellViewConfig>
{
    NSArray *_mediaCardViewModels;
    SCSummaries *_summaries;
    _Bool _disableMediaCardContextMenu;
    NSString *_phoneNumber;
    NSString *_formattedPhoneNumber;
    SCUserSession *_userSession;
    NSArray *_textMediaAttributes;
    NSAttributedString *_attributedText;
    NSString *_rawText;
    double _chatLabelHeight;
    NSArray *_textFormatAttributes;
    NSMutableDictionary *_cachedBrowserVCs;
}

@property(retain, nonatomic) NSMutableDictionary *cachedBrowserVCs; // @synthesize cachedBrowserVCs=_cachedBrowserVCs;
@property(readonly, nonatomic) NSArray *textFormatAttributes; // @synthesize textFormatAttributes=_textFormatAttributes;
@property(readonly, nonatomic) double chatLabelHeight; // @synthesize chatLabelHeight=_chatLabelHeight;
@property(readonly, copy, nonatomic) NSString *rawText; // @synthesize rawText=_rawText;
- (void).cxx_destruct;
- (_Bool)shouldActOnLinkGesture;
- (long long)_numberOfMediaCards;
- (double)_heightOfMediaCards;
- (id)_titleForPhoneNumber:(id)arg1;
- (id)phoneCardViewModelForPhoneNumber:(id)arg1;
- (id)addressMediaCardViewModelForAddress:(id)arg1;
- (id)urlMediaCardViewModelForURL:(id)arg1;
- (id)_generateMediaCardViewModels;
- (id)mediaCardViewModels;
- (_Bool)shouldShowChatLabel;
- (id)productToDisplayLinkAttribute;
- (id)attributedStringWithMediaCardLinks:(id)arg1;
- (id)attributedText;
- (id)colorForLinkUnderline;
- (id)colorForLink;
- (id)colorForChatLabel;
- (id)fontForChatLabel;
- (double)bodyContentWidth;
- (double)payloadVerticalMargin;
- (double)payloadHeight;
- (id)summaries;
- (id)createChatCellWithParentVC:(id)arg1 delegate:(id)arg2;
- (id)reusableCellIdentifier;
- (id)initWithMessage:(id)arg1 messageMetadata:(id)arg2 props:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


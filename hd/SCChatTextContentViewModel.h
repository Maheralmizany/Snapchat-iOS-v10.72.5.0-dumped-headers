//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "SCSavableTextChatCellViewConfig.h"

@class NSArray, NSAttributedString, NSString;

@interface SCChatTextContentViewModel : NSObject <SCSavableTextChatCellViewConfig, NSCopying>
{
    _Bool _shouldShowChatLabel;
    NSString *_rawText;
    NSAttributedString *_attributedText;
    double _chatLabelHeight;
    double _mediaCardsHeight;
    double _contentWidth;
    NSArray *_mediaCards;
}

@property(readonly, nonatomic) _Bool shouldShowChatLabel; // @synthesize shouldShowChatLabel=_shouldShowChatLabel;
@property(readonly, copy, nonatomic) NSArray *mediaCards; // @synthesize mediaCards=_mediaCards;
@property(readonly, nonatomic) double contentWidth; // @synthesize contentWidth=_contentWidth;
@property(readonly, nonatomic) double mediaCardsHeight; // @synthesize mediaCardsHeight=_mediaCardsHeight;
@property(readonly, nonatomic) double chatLabelHeight; // @synthesize chatLabelHeight=_chatLabelHeight;
@property(readonly, copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
@property(readonly, copy, nonatomic) NSString *rawText; // @synthesize rawText=_rawText;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRawText:(id)arg1 attributedText:(id)arg2 chatLabelHeight:(double)arg3 mediaCardsHeight:(double)arg4 contentWidth:(double)arg5 mediaCards:(id)arg6 shouldShowChatLabel:(_Bool)arg7;
- (_Bool)shouldActOnLinkGesture;
- (id)mediaCardViewModels;
- (id)productToDisplayLinkAttribute;
- (id)fontForChatLabel;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


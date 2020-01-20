//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCBaseChatCellViewModel.h"

#import "SCEmptyChatCellViewModelDisplayable.h"

@class NSAttributedString, NSString, UIImage;

@interface SCEmptyChatCellViewModel : SCBaseChatCellViewModel <SCEmptyChatCellViewModelDisplayable>
{
    UIImage *_symbolImage;
    NSAttributedString *_bannerText;
    struct CGSize _bannerSize;
}

@property(readonly, copy, nonatomic) NSAttributedString *bannerText; // @synthesize bannerText=_bannerText;
@property(readonly, nonatomic) UIImage *symbolImage; // @synthesize symbolImage=_symbolImage;
@property(readonly, nonatomic) struct CGSize bannerSize; // @synthesize bannerSize=_bannerSize;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool shouldDisplayBelowFoldInChat;
- (id)createChatCellWithParentVC:(id)arg1 delegate:(id)arg2;
@property(readonly, nonatomic) NSString *reusableCellIdentifier;
- (double)calculateHeight;
@property(readonly, nonatomic) id <NSObject> identifier;
- (id)initWithProps:(id)arg1;

// Remaining properties
@property(nonatomic) _Bool bottomLeftCornerIsRounded;
@property(nonatomic) _Bool bottomRightCornerIsRounded;
@property(readonly, nonatomic) double dateHeaderHeight;
@property(readonly, nonatomic) double dateHeaderHorizontalMargin;
@property(readonly, nonatomic) double dateHeaderVerticalMargin;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) double headerHorizontalMargin;
@property(nonatomic) int headerIndex;
@property(nonatomic) double height;
@property(nonatomic) _Bool isFirstViewModel;
@property(nonatomic) _Bool isLastViewModel;
@property(readonly, nonatomic) _Bool isUnseenMessageInChat;
@property(readonly, nonatomic) _Bool shouldShowDateHeader;
@property(readonly, nonatomic) _Bool shouldShowSenderHeader;
@property(readonly, nonatomic) _Bool shouldShowTimestamp;
@property(readonly) Class superclass;
@property(readonly, nonatomic) double topMargin;
@property(nonatomic) _Bool topRightCornerIsRounded;

@end


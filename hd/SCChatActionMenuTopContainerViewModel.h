//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSAttributedString, SCChatActionMenuHeaderViewModel, UIColor;

@interface SCChatActionMenuTopContainerViewModel : NSObject <NSCopying>
{
    NSAttributedString *_attributedMessageState;
    UIColor *_contentBackgroundColor;
    SCChatActionMenuHeaderViewModel *_headerViewModel;
}

@property(readonly, copy, nonatomic) SCChatActionMenuHeaderViewModel *headerViewModel; // @synthesize headerViewModel=_headerViewModel;
@property(readonly, copy, nonatomic) UIColor *contentBackgroundColor; // @synthesize contentBackgroundColor=_contentBackgroundColor;
@property(readonly, copy, nonatomic) NSAttributedString *attributedMessageState; // @synthesize attributedMessageState=_attributedMessageState;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAttributedMessageState:(id)arg1 contentBackgroundColor:(id)arg2 headerViewModel:(id)arg3;

@end


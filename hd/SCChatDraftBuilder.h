//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSAttributedString, NSDictionary;

@interface SCChatDraftBuilder : NSObject
{
    NSAttributedString *_attributedText;
    NSDictionary *_userInfo;
}

+ (id)withChatDraft:(id)arg1;
- (void).cxx_destruct;
- (id)setUserInfo:(id)arg1;
- (id)setAttributedText:(id)arg1;
- (id)build;

@end


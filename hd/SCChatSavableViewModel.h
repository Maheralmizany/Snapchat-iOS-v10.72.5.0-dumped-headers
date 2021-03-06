//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSAttributedString, SCChatSaveAnimationData, UIColor;

@interface SCChatSavableViewModel : NSObject <NSCopying>
{
    _Bool _isSavedLabelSaved;
    UIColor *_savedBackgroundColor;
    NSAttributedString *_savedByUsersText;
    unsigned long long _cornerMask;
    SCChatSaveAnimationData *_animationData;
}

@property(readonly, copy, nonatomic) SCChatSaveAnimationData *animationData; // @synthesize animationData=_animationData;
@property(readonly, nonatomic) _Bool isSavedLabelSaved; // @synthesize isSavedLabelSaved=_isSavedLabelSaved;
@property(readonly, nonatomic) unsigned long long cornerMask; // @synthesize cornerMask=_cornerMask;
@property(readonly, copy, nonatomic) NSAttributedString *savedByUsersText; // @synthesize savedByUsersText=_savedByUsersText;
@property(readonly, copy, nonatomic) UIColor *savedBackgroundColor; // @synthesize savedBackgroundColor=_savedBackgroundColor;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSavedBackgroundColor:(id)arg1 savedByUsersText:(id)arg2 cornerMask:(unsigned long long)arg3 isSavedLabelSaved:(_Bool)arg4 animationData:(id)arg5;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSAttributedString, NSDictionary, NSString, SCFriendNetworkString;

@interface SCSnapchatterFriendInfoViewModel : NSObject <NSCopying>
{
    NSAttributedString *_primaryLabelAttributedText;
    NSString *_usernameText;
    NSString *_friendMojiText;
    SCFriendNetworkString *_friendScoreText;
    NSDictionary *_secondaryLabelAttributes;
    double _lineBetweenPadding;
}

@property(readonly, nonatomic) double lineBetweenPadding; // @synthesize lineBetweenPadding=_lineBetweenPadding;
@property(readonly, copy, nonatomic) NSDictionary *secondaryLabelAttributes; // @synthesize secondaryLabelAttributes=_secondaryLabelAttributes;
@property(readonly, copy, nonatomic) SCFriendNetworkString *friendScoreText; // @synthesize friendScoreText=_friendScoreText;
@property(readonly, copy, nonatomic) NSString *friendMojiText; // @synthesize friendMojiText=_friendMojiText;
@property(readonly, copy, nonatomic) NSString *usernameText; // @synthesize usernameText=_usernameText;
@property(readonly, copy, nonatomic) NSAttributedString *primaryLabelAttributedText; // @synthesize primaryLabelAttributedText=_primaryLabelAttributedText;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPrimaryLabelAttributedText:(id)arg1 usernameText:(id)arg2 friendMojiText:(id)arg3 friendScoreText:(id)arg4 secondaryLabelAttributes:(id)arg5 lineBetweenPadding:(double)arg6;

@end


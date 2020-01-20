//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCEmojiSet : NSObject
{
}

+ (id)emojiSetThatNeedFE0FPadding;
+ (id)zeroWidthJoinerCharacterSet;
+ (id)sharedInstance;
- (unsigned long long)_getNumSubstringInString:(id)arg1 withSubstring:(id)arg2;
- (id)getEmoji:(id)arg1 withSkinTone:(long long)arg2;
- (id)unicodeEmojiWithoutSkinTone:(id)arg1;
- (_Bool)_unicodeStringHasSkinToneModifier:(id)arg1;
- (long long)skinTone:(id)arg1;
- (_Bool)unicodeCanHaveSkinTone:(id)arg1;
- (_Bool)supportsSkinTones;
- (id)unicodeSymbolEmojis;
- (id)unicodeFlagEmojis;
- (id)unicodeBaseEmojisExcludedFromSkinTones;
- (id)_unicodeBaseEmojisForSkinTones;
- (id)frequentlyUsedEmojisFromUser;
- (id)emojiSkinTones;
- (id)frequentlyUsedEmojis;
- (id)categories;

@end

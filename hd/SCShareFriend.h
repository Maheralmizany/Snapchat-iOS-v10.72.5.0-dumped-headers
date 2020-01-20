//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSArray, NSString;

@interface SCShareFriend : NSObject <NSCoding>
{
    NSString *_name;
    NSString *_display;
    NSArray *_emojisForFriend;
}

@property(copy, nonatomic) NSArray *emojisForFriend; // @synthesize emojisForFriend=_emojisForFriend;
@property(copy, nonatomic) NSString *display; // @synthesize display=_display;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (_Bool)matches:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithNameAndEmojis:(id)arg1 display:(id)arg2 emojisForFriend:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


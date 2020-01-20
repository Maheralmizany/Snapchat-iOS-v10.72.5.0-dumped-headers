//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIColor;

@interface SCOperaWebAppChatModel : NSObject
{
    NSString *_displayName;
    NSString *_text;
    UIColor *_color;
    NSString *_userId;
    NSString *_username;
    NSString *_messageId;
}

@property(readonly, copy, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(readonly, copy, nonatomic) UIColor *color; // @synthesize color=_color;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)initWithDisplayName:(id)arg1 color:(id)arg2 text:(id)arg3 userId:(id)arg4 username:(id)arg5 messageId:(id)arg6;

@end


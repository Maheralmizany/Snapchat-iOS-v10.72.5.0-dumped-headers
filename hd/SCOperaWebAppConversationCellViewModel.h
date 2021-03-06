//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIColor;

@interface SCOperaWebAppConversationCellViewModel : NSObject
{
    NSString *_senderNameToDisplay;
    NSString *_text;
    UIColor *_senderColor;
    NSString *_userId;
}

@property(readonly, copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(readonly, copy, nonatomic) UIColor *senderColor; // @synthesize senderColor=_senderColor;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, copy, nonatomic) NSString *senderNameToDisplay; // @synthesize senderNameToDisplay=_senderNameToDisplay;
- (void).cxx_destruct;
- (id)textFont;
- (id)senderDisplayNameFont;
- (struct CGSize)sizeThatFitsWidth:(double)arg1;
- (id)initWithSenderNameToDisplay:(id)arg1 color:(id)arg2 text:(id)arg3 userId:(id)arg4;

@end


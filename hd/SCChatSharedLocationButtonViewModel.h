//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SCChatSharedLocationButtonViewModel : NSObject
{
    NSString *_title;
    unsigned long long _style;
    CDUnknownBlockType _action;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
@property(readonly, nonatomic) unsigned long long style; // @synthesize style=_style;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 style:(unsigned long long)arg2 action:(CDUnknownBlockType)arg3;

@end


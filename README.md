# UberKitRequest
APIs for ordering Uber cars

-(void)getResponseFromRequestWithParameters:(NSDictionary *)params withCompletionHandler:(RequestHandler)handler;

@property (strong, nonatomic) NSString *accessToken;

1. Make sure you registered Uber developer;

2. Call the API only after passing in your valid access token and parameters according to Uber developer API site:
https://developer.uber.com/v1/endpoints/

3. The endpoint server is Uber sandbox, change to real server if you would like to give it a real ride.

4. The rest of the request APIs will be added soon...

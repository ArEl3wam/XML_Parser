



vector<string> XmlParser::splitter(string s, int size) {
    vector<string>chars;
    while (s.size() > 0) {
        chars.push_back(s.substr(0, size));
        s.erase(0, size);
    }
    return chars;
}
string XmlParser::getSpace(int numOfSpaces){
    string spaces;
    for (int i = 0; i < numOfSpaces; ++i)
        spaces.push_back(' ');
    return spaces;
}
string XmlParser::getTagName(string tag) {
    string name;
    for (int i = 0; i < tag.size(); ++i)
        if (tag[i] != '<' && tag[i] != '>' && tag[i] != '/')
            name.push_back(tag[i]);
    return name;
}
void XmlParser::deleteNewLines() {
    xmlCommpressed = "";
    int i = 0;
    string currentLine;
    while (i < xml.size()) {
        for (i; xml[i] != '\n' && i < xml.size(); ++i)
            currentLine += xml[i];
        ++i;
        xmlCommpressed += trimLine(currentLine);
        currentLine = "";
    }
}
string XmlParser::BiToHex(string s) {
    vector<string>chars = splitter(s, 5);
    string hex = "";
    for (string i : chars) {
        if (i == "00000") {
            hex += '0';
        }
        else if (i == "00001") {
            hex += '1';
        }
        else if (i == "00010") {
            hex += '2';
        }
        else if (i == "00011") {
            hex += '3';
        }
        else if (i == "00100") {
            hex += '4';
        }
        else if (i == "00101") {
            hex += '5';
        }
        else if (i == "00110") {
            hex += '6';
        }
        else if (i == "00111") {
            hex += '7';
        }
        else if (i == "01000") {
            hex += '8';
        }
        else if (i == "01001") {
            hex += '9';
        }
        else if (i == "01010") {
            hex += 'A';
        }
        else if (i == "01011") {
            hex += 'B';
        }
        else if (i == "01100") {
            hex += 'C';
        }
        else if (i == "01101") {
            hex += 'D';
        }
        else if (i == "01110") {
            hex += 'E';
        }
        else if (i == "01111") {
            hex += 'F';
        }
        else if (i == "10000") {
            hex += 'G';
        }
        else if (i == "10001") {
            hex += 'H';
        }
        else if (i == "10010") {
            hex += 'I';
        }
        else if (i == "10011") {
            hex += 'J';
        }
        else if (i == "10100") {
            hex += 'K';
        }
        else if (i == "10101") {
            hex += 'L';
        }
        else if (i == "10110") {
            hex += 'M';
        }
        else if (i == "10111") {
            hex += 'N';
        }
        else if (i == "11000") {
            hex += 'O';
        }
        else if (i == "11001") {
            hex += 'P';
        }
        else if (i == "11010") {
            hex += 'Q';
        }
        else if (i == "11011") {
            hex += 'R';
        }
        else if (i == "11100") {
            hex += 'S';
        }
        else if (i == "11101") {
            hex += 'T';
        }
        else if (i == "11110") {
            hex += 'U';
        }
        else if (i == "11111") {
            hex += 'V';
        }
    }
    return hex;
}
string XmlParser::HexToBi(string s) {
    string bi = "";
    for (char i : s) {
        if (i == '0') {
            bi += "00000";
        }
        else if (i == '1') {
            bi += "00001";
        }
        else if (i == '2') {
            bi += "00010";
        }
        else if (i == '3') {
            bi += "00011";
        }
        else if (i == '4') {
            bi += "00100";
        }
        else if (i == '5') {
            bi += "00101";
        }
        else if (i == '6') {
            bi += "00110";
        }
        else if (i == '7') {
            bi += "00111";
        }
        else if (i == '8') {
            bi += "01000";
        }
        else if (i == '9') {
            bi += "01001";
        }
        else if (i == 'A') {
            bi += "01010";
        }
        else if (i == 'B') {
            bi += "01011";
        }
        else if (i == 'C') {
            bi += "01100";
        }
        else if (i == 'D') {
            bi += "01101";
        }
        else if (i == 'E') {
            bi += "01110";
        }
        else if (i == 'F') {
            bi += "01111";
        }
        else if (i == 'G') {
            bi += "10000";
        }
        else if (i == 'H') {
            bi += "10001";
        }
        else if (i == 'I') {
            bi += "10010";
        }
        else if (i == 'J') {
            bi += "10011";
        }
        else if (i == 'K') {
            bi += "10100";
        }
        else if (i == 'L') {
            bi += "10101";
        }
        else if (i == 'M') {
            bi += "10110";
        }
        else if (i == 'N') {
            bi += "10111";
        }
        else if (i == 'O') {
            bi += "11000";
        }
        else if (i == 'P') {
            bi += "11001";
        }
        else if (i == 'Q') {
            bi += "11010";
        }
        else if (i == 'R') {
            bi += "11011";
        }
        else if (i == 'S') {
            bi += "11100";
        }
        else if (i == 'T') {
            bi += "11101";
        }
        else if (i == 'U') {
            bi += "11110";
        }
        else if (i == 'V') {
            bi += "11111";
        }
    }
    return bi;
}

void XmlParser::extractData() {
    vector<Post> posts;
    vector<Follower> followers;
    vector<string> topics;
    int order = 0;
    int innerOrder = 0;
    int followersOder = -1;
    int postsOrder = -1;
    int topicsOrder = -1;
    bool followerHasId = 0;
    User user;
    Post post;
    Follower follower;
    bool inFollower = 0;
    bool inPost = 0;
    bool inPosts = 0;
    bool inFollowers = 0;
    bool inTopics = 0;
    bool inUser = 0;
    for (int i = 0; i < xmlCommpressed.size(); ++i) {
        if ((xmlCommpressed[i] == '<' && (i == 0 || xmlCommpressed[i - 1] != '\\' || (i >= 2 && xmlCommpressed[i - 1] == '\\' && xmlCommpressed[i - 2] == '\\')))) {
            string tagFrame = getTagFrame(xmlCommpressed, i);
            string tagName = getTagName(tagFrame);
            if (isStartTag(tagFrame)) {
                if (tagName == "name" || tagName == "body" || tagName == "topic" || tagName == "id") {
                    ++i;
                    string data = getData(xmlCommpressed, i);
                    getTagFrame(xmlCommpressed, i);
                    if (inUser && !inPosts && !inFollowers) {
                        if (tagName == "name") {
                            user.nameVector.push_back(createPair(order, data));
                            ++order;
                        }
                        else if (tagName == "id") {
                            user.idVector.push_back(createPair(order, data));
                            ++order;
                        }
                    }
                    else if (inUser && inFollower) {
                        if (tagName == "id") {
                            follower.idVector.push_back(data);
                            followerHasId = 1;
                        }
                    }
                    else if (inUser && inPost && !inTopics) {
                        if (tagName == "body") {
                            post.bodyVector.push_back(createPair(innerOrder, data));
                            ++innerOrder;
                        }
                    }
                    else if (inTopics) {
                        if (tagName == "topic") {
                            topics.push_back(data);
                        }
                    }
                }
                else if (tagName == "user") {
                    if (!inUser) {
                        order = 0;
                        followersOder = -1;
                        postsOrder = -1;
                        user.clear();
                        inUser = 1;
                    }
                }
                else if (tagName == "followers") {
                    if (!inFollowers) {
                        followersOder = order;
                        ++order;
                        inFollowers = 1;
                        followers.clear();
                    }
                }
                else if (tagName == "topics") {
                    if (!inTopics) {
                        inTopics = 1;
                        topicsOrder = innerOrder;
                        ++innerOrder;
                        topics.clear();
                    }
                }
                else if (tagName == "posts") {
                    if (!inPosts) {
                        inPosts = 1;
                        postsOrder = order;
                        posts.clear();
                        ++order;
                    }
                }
                else if (tagName == "follower") {
                    if (!inFollower) {
                        follower.clear();
                        inFollower = 1;
                    }
                }
                else if (tagName == "post") {
                    if (!inPost) {
                        innerOrder = 0;
                        post.clear();
                        inPost = 1;
                        topicsOrder = -1;
                    }
                }
            }
            else {
                if (tagName == "user") {
                    if (inUser) {
                        inUser = 0;
                        users.push_back(user);
                    }
                }
                else if (tagName == "followers") {
                    if (inFollowers) {
                        inFollowers = 0;
                        user.followersVector.push_back(createPair(followersOder, followers));
                    }
                }
                else if (tagName == "topics") {
                    if (inTopics) {
                        inTopics = 0;
                        post.topicsVector.push_back(createPair(topicsOrder, topics));
                    }
                }
                else if (tagName == "posts") {
                    if (inPosts) {
                        inPosts = 0;
                        user.postsVector.push_back(createPair(postsOrder, posts));
                    }
                }
                else if (tagName == "follower") {
                    if (inFollower) {
                        inFollower = 0;
                        if (followerHasId) {
                            followers.push_back(follower);
                            followerHasId = 0;
                        }
                    }
                }
                else if (tagName == "post") {
                    if (inPost) {
                        inPost = 0;
                        posts.push_back(post);
                    }
                }
            }
        }
    }
    for (int i = 0; i < users.size(); ++i) {
        users[i].setUser();
        for (int j = 0; j < users[i].posts.second.size(); ++j)
            users[i].posts.second[j].setPost();
        for (int j = 0; j < users[i].followers.second.size(); ++j)
            users[i].followers.second[j].setFollower();
    }
}
void XmlParser::printJson() {
    if (xml == "")
        return;
    json = "";
    users.clear();
    extractData();
    json.append("{\n" +
        getSpace(4) + "\"users\": [\n");
    //printing the users data
    for (auto user : users)
        user.printInJson(json);
    json.append(getSpace(4) + "]\n" +
        "}\n");
}
void XmlParser::correctTag(string tagName) {  //Lines vector->Lines vector (corrected)
    set<string> escapeTags;
    if (tagName == "topics")
        escapeTags.insert("topic");
    else if (tagName == "follower")
        escapeTags.insert("id");
    else if (tagName == "followers") {
        escapeTags.insert("follower");
        escapeTags.insert("id");
    }
    else if (tagName == "post") {
        escapeTags.insert("body");
        escapeTags.insert("topic");
        escapeTags.insert("topics");
    }
    else if (tagName == "posts") {
        escapeTags.insert("body");
        escapeTags.insert("topic");
        escapeTags.insert("topics");
        escapeTags.insert("post");
    }
    else if (tagName == "user") {
        escapeTags.insert("id");
        escapeTags.insert("name");
        escapeTags.insert("body");
        escapeTags.insert("topic");
        escapeTags.insert("topics");
        escapeTags.insert("post");
        escapeTags.insert("posts");
        escapeTags.insert("follower");
        escapeTags.insert("followers");
    }
    else if (tagName == "users") {
        escapeTags.insert("id");
        escapeTags.insert("name");
        escapeTags.insert("body");
        escapeTags.insert("topic");
        escapeTags.insert("topics");
        escapeTags.insert("post");
        escapeTags.insert("posts");
        escapeTags.insert("follower");
        escapeTags.insert("followers");
        escapeTags.insert("user");
    }
    bool search = 0;
    //first stage
    vector<int>pos;
    for (int i = 0; i < lines.size(); ++i) {
        if (search == 1 && lines[i][0] == '<') {
            if (!escapeTags.count(getTagName(lines[i]))) {
                if (isStartTag(lines[i]))
                    pos.push_back(i);
                else
                    if (getTagName(lines[i]) != tagName)
                        pos.push_back(i);
                search = 0;
            }
        }
        else if (lines[i][0] == '<' && isStartTag(lines[i])) {
            if (getTagName(lines[i]) == tagName) {
                search = 1;
            }
        }
    }
    if (search) {
        lines.push_back("</" + tagName + ">");
        search = 0;
    } vector<string>newLines(lines.size() + pos.size());
    for (int i = 0; i < pos.size(); ++i) {
        newLines[pos[i]] = "</" + tagName + ">";
    }
    int k = 0;
    for (int i = 0; i < lines.size(); ++i) {
        if (newLines[k].empty()) {
            newLines[k] = lines[i];
            ++k;
        }
        else {
            ++k;
            --i;
        }
    }
    lines = newLines;
    newLines.clear();
    pos.clear();
    //second stage
    search = 0;
    for (int i = lines.size() - 1; i >= 0; --i) {
        if (search == 1 && lines[i][0] == '<') {
            if (!escapeTags.count(getTagName(lines[i]))) {
                if (!isStartTag(lines[i]))
                    pos.push_back(i + 1);
                else
                    if (getTagName(lines[i]) != tagName)
                        pos.push_back(i + 1);
                search = 0;
            }
        }
        else if (lines[i][0] == '<' && !isStartTag(lines[i])) {
            if (getTagName(lines[i]) == tagName) {
                search = 1;
            }
        }
    }
    if (search) {
        lines.insert(lines.begin(), "<" + tagName + ">");
        search = 0;
    } //
    newLines.resize(lines.size() + pos.size());
    for (int i = 0; i < pos.size(); ++i) {
        newLines[pos[i]] = "<" + tagName + ">";
    }
    k = 0;
    for (int i = 0; i < lines.size(); ++i) {
        if (newLines[k].empty()) {
            newLines[k] = lines[i];
            ++k;
        }
        else {
            ++k;
            --i;
        }
    }
    lines = newLines;
}
void XmlParser::toLines() {
    lines.clear();
    deleteNewLines();
    string tagFrame;
    string data;
    bool open = 0;
    for (int i = 0; i < xmlCommpressed.size(); ++i) {
        if (xmlCommpressed[i] != '\n') {
            if (xmlCommpressed[i] == '<' && (i == 0 || xmlCommpressed[i - 1] != '\\' || (i >= 2 && xmlCommpressed[i - 1] == '\\' && xmlCommpressed[i - 2] == '\\'))) {
                if (!trimLine(data).empty()) {
                    data = trimLine(data);
                    lines.push_back(data);
                    data.clear();
                }
                open = 1;
                tagFrame.push_back(xmlCommpressed[i]);
            }
            else if (xmlCommpressed[i] == '>' && (i == 0 || xmlCommpressed[i - 1] != '\\')) {
                open = 0;
                tagFrame.push_back(xmlCommpressed[i]);
                tagFrame = trimLine(tagFrame);
                lines.push_back(tagFrame);
                tagFrame.clear();
            }
            else {
                if (open)
                    tagFrame.push_back(xmlCommpressed[i]);
                else
                    data.push_back(xmlCommpressed[i]);
            }
        }
    }
    if (!trimLine(data).empty()) {
        data = trimLine(data);
        lines.push_back(data);
        data.clear();
    }
    recreateXml();
}
void XmlParser::fillColors() {
    colors.clear();
    colors.resize(11);
    for (int i = 0; i < xmlFormatted.size(); ++i) {
        if (xmlFormatted[i] == '<' && (i == 0 || xmlFormatted[i - 1] != '\\' || (i >= 2 && xmlFormatted[i - 1] == '\\' && xmlFormatted[i - 2] == '\\'))) { //markd the start of a tag
            int start = i;
            string tagFrame = getTagFrame(xmlFormatted, i);
            int end = i;
            string tagName = getTagName(tagFrame);
            int target = -1;
            if (tagName == "users")
                target = USERS_COLOR;
            else if (tagName == "user")
                target = USER_COLOR;
            else if (tagName == "id")
                target = ID_COLOR;
            else if (tagName == "name")
                target = NAME_COLOR;
            else if (tagName == "posts")
                target = POSTS_COLOR;
            else if (tagName == "post")
                target = POST_COLOR;
            else if (tagName == "body")
                target = BODY_COLOR;
            else if (tagName == "topic")
                target = TOPIC_COLOR;
            else if (tagName == "topics")
                target = TOPICS_COLOR;
            else if (tagName == "follower")
                target = FOLLOWER_COLOR;
            else if (tagName == "followers")
                target = FOLLOWERS_COLOR;
            //cout << tagFrame << endl;
            colors[target].push_back(createPair(start, end));
        }
    }
}